// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCUSTOMAPPMENUITEM_H
#define CKCUSTOMAPPMENUITEM_H

@class NSString;
@protocol CKAppMenuItem;

#import <Foundation/Foundation.h>


@interface CKCustomAppMenuItem : NSObject <CKAppMenuItem>



@property (readonly, nonatomic) NSString *__ck_displayName; // ivar: ___ck_displayName
@property (readonly, nonatomic) id *__ck_identifier; // ivar: ___ck_identifier


-(id)__ck_imageForTraitCollection:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 ;


@end


#endif