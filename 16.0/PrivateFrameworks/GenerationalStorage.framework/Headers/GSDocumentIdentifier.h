// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GSDOCUMENTIDENTIFIER_H
#define GSDOCUMENTIDENTIFIER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    unsigned char volumeUUID;
    NSUInteger documentID;
    int deviceID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentIdentifier:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 forItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif