// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCALLERSUPPLIEDFIELDS_H
#define MTCALLERSUPPLIEDFIELDS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MTCallerSuppliedFields : NSObject

@property (retain, nonatomic) NSDictionary *cachedMergedFields; // ivar: _cachedMergedFields
@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData


-(id)initWithEventData:(id)arg0 ;
-(id)initWithPageId:(id)arg0 pageType:(id)arg1 pageContext:(id)arg2 eventData:(id)arg3 ;
-(id)mergedFields;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForCallerSuppliedField:(id)arg0 ;


@end


#endif