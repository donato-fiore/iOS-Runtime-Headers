// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMTHREADCOLLECTIONITEMID_H
#define EMTHREADCOLLECTIONITEMID_H

@class NSString;
@protocol EFCacheable, EMCollectionItemID;

#import <Foundation/Foundation.h>


@interface EMThreadCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>



@property (readonly, nonatomic) NSInteger conversationID; // ivar: _conversationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
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
-(id)initWithConversationID:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif