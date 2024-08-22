// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLCOMPOSESHEETCONFIGURATIONITEM_H
#define SLCOMPOSESHEETCONFIGURATIONITEM_H

@class NSString;
@protocol SLComposeSheetConfigurationItemObserving;

#import <Foundation/Foundation.h>


@interface SLComposeSheetConfigurationItem : NSObject {
    id<SLComposeSheetConfigurationItemObserving> *_changeObserver;
}


@property (copy, nonatomic) id *tapHandler; // ivar: _tapHandler
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *value; // ivar: _value
@property (nonatomic) BOOL valuePending; // ivar: _valuePending


-(id)changeObserver;
-(id)init;
-(void)setChangeObserver:(id)arg0 ;


@end


#endif