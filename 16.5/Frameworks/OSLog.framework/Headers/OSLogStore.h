// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGSTORE_H
#define OSLOGSTORE_H

@class OSLogEventSource;

#import <Foundation/Foundation.h>


@interface OSLogStore : NSObject {
    OSLogEventSource *_source;
    int _constraint;
}




+(id)storeWithScope:(NSInteger)arg0 error:(*id)arg1 ;
+(id)storeWithURL:(id)arg0 error:(*id)arg1 ;
-(id)_constrainedEntriesEnumeratorWithOptions:(NSUInteger)arg0 position:(id)arg1 predicate:(id)arg2 error:(*id)arg3 ;
-(id)entriesEnumeratorAndReturnError:(*id)arg0 ;
-(id)entriesEnumeratorWithOptions:(NSUInteger)arg0 position:(id)arg1 predicate:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initForFactory;
-(id)positionWithDate:(id)arg0 ;
-(id)positionWithTimeIntervalSinceEnd:(CGFloat)arg0 ;
-(id)positionWithTimeIntervalSinceLatestBoot:(CGFloat)arg0 ;


@end


#endif