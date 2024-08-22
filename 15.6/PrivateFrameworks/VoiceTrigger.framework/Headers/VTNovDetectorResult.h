// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTNOVDETECTORRESULT_H
#define VTNOVDETECTORRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VTNovDetectorResult : NSObject

@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) NSUInteger bestPhrase; // ivar: _bestPhrase
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL earlyWarning; // ivar: _earlyWarning
@property (nonatomic) BOOL isRescoring; // ivar: _isRescoring
@property (nonatomic) NSUInteger sampleFed; // ivar: _sampleFed


-(id)initWithResult:(id)arg0 ;


@end


#endif