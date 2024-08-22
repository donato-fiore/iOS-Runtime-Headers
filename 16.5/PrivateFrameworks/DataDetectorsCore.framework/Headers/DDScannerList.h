// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSCANNERLIST_H
#define DDSCANNERLIST_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}




-(BOOL)cancelJob:(NSInteger)arg0 ;
-(NSUInteger)busyCount;
-(NSUInteger)totalCount;
-(id)dequeueJob;
-(id)getCachedScanner;
-(id)initWithConfiguration:(id)arg0 ;
-(id)scannerCreate;
-(void)activateScanner:(id)arg0 ;
// -(void)enqueueJob:(id)arg0 withIdentifier:(unk)arg1  ;
-(void)pushBackScanner:(id)arg0 ;


@end


#endif