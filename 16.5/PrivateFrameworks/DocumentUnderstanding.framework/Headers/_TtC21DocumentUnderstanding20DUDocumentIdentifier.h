// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING20DUDOCUMENTIDENTIFIER_H
#define _TTC21DOCUMENTUNDERSTANDING20DUDOCUMENTIDENTIFIER_H

@protocol NSCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding20DUDocumentIdentifier : NSObject <NSCoding, NSCopying, NSSecureCoding>

 {
    ? documentNamespace;
    ? documentID;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif