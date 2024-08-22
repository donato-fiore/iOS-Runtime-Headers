// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKTEXTFEATURE_H
#define FKTEXTFEATURE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FKTextFeature : NSObject {
    ? _backingIndex;
    ? _session;
    int _scale;
}


@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) NSArray *candidates; // ivar: _candidates
@property float confidence; // ivar: _confidence
@property (readonly, retain, nonatomic) NSArray *corners; // ivar: _corners
@property (readonly, nonatomic) NSInteger featureID; // ivar: _featureID
@property (retain, nonatomic) NSArray *subFeatures; // ivar: _subFeatures
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(?)featureFromConcompIndex:(?)arg0 session:(?)arg1 scaling:(?)arg2 type:(?)arg3 createDiacriticFeaturesfeatureID;
+(?)featureFromSequenceIndex:(?)arg0 session:(?)arg1 scaling:(?)arg2 createConcompFeatures:(?)arg3 createDiacriticFeaturesfeatureID;
// -(id)initWithType:(NSInteger)arg0 boundingBox:(struct CGRect *)arg1 corners:(id)arg2 featureID:(NSInteger)arg3 session:(struct FKSession *)arg4 backingIndex:(unk)arg5 scale:(int)arg6  ;
-(void)dealloc;


@end


#endif