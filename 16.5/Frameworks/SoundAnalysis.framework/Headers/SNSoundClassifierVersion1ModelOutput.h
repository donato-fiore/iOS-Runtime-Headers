// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDCLASSIFIERVERSION1MODELOUTPUT_H
#define SNSOUNDCLASSIFIERVERSION1MODELOUTPUT_H

@class NSDictionary, NSString, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundClassifierVersion1ModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSDictionary *_9; // ivar: __9
@property (retain, nonatomic) NSString *classLabel; // ivar: _classLabel
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWith_9:(id)arg0 classLabel:(id)arg1 ;


@end


#endif