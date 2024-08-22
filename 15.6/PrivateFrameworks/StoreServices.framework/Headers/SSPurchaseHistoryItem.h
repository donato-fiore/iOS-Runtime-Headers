// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPURCHASEHISTORYITEM_H
#define SSPURCHASEHISTORYITEM_H

@class NSMutableDictionary, NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_properties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif