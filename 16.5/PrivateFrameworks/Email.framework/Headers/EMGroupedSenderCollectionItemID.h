// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMGROUPEDSENDERCOLLECTIONITEMID_H
#define EMGROUPEDSENDERCOLLECTIONITEMID_H

@class NSString;
@protocol EFCacheable, EMCollectionItemID;

#import <Foundation/Foundation.h>


@interface EMGroupedSenderCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *simpleAddress; // ivar: _simpleAddress
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)cachedSelf;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSimpleAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif