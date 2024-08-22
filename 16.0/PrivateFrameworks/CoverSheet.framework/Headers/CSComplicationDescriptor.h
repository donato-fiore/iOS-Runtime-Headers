// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPLICATIONDESCRIPTOR_H
#define CSCOMPLICATIONDESCRIPTOR_H

@class CHSWidgetMetrics, NSString, CHSWidget;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSComplicationDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration; // ivar: _blockedForScreenTimeExpiration
@property (readonly, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) CHSWidget *widget; // ivar: _widget


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptorBlockedForScreenTimeExpiration:(BOOL)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 widget:(id)arg1 metrics:(id)arg2 blockedForScreenTimeExpiration:(BOOL)arg3 ;
-(id)layoutElement;


@end


#endif