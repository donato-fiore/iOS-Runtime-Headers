// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFEEDBACKSTATEREADER_H
#define ATXFEEDBACKSTATEREADER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface ATXFeedbackStateReader : NSObject {
    NSData *_data;
    char * _perPredictionDataStart;
    int _predictionCount;
    Class _predictedItemKeyClass;
}


@property (readonly, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (readonly, nonatomic) NSInteger assetVersion; // ivar: _assetVersion


+(id)numberKeyWithData:(id)arg0 ;
+(id)stringKeyWithData:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 predictedItemKeyClass:(Class)arg1 ;
-(void)enumerateApps:(id)arg0 ;


@end


#endif