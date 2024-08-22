// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMESSAGECOLLECTIONITEMID_H
#define EMMESSAGECOLLECTIONITEMID_H

@class NSString;
@protocol EFCacheable, EMCollectionItemID;

#import <Foundation/Foundation.h>


@interface EMMessageCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger globalMessageID; // ivar: _globalMessageID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)cachedSelf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGlobalMessageID:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif