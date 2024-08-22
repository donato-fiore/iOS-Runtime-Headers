// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPTESTINGOPERATION_H
#define FPTESTINGOPERATION_H

@class NSString;
@protocol NSFileProviderTestingOperation, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FPTestingOperation : NSObject <NSFileProviderTestingOperation, NSSecureCoding, NSCopying>

 {
    NSString *_operationIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)asChildrenEnumeration;
-(id)asCollisionResolution;
-(id)asContentFetch;
-(id)asCreation;
-(id)asDeletion;
-(id)asIngestion;
-(id)asLookup;
-(id)asModification;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif