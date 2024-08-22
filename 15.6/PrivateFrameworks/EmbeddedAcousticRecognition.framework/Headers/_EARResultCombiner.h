// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARRESULTCOMBINER_H
#define _EARRESULTCOMBINER_H


#import <Foundation/Foundation.h>


@interface _EARResultCombiner : NSObject {
    unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>> _combiner;
}




+(void)initialize;
-(id)combinedResultWithSystemResults:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif