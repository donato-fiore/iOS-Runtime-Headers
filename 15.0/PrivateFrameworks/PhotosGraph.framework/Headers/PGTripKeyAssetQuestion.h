// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTRIPKEYASSETQUESTION_H
#define PGTRIPKEYASSETQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithKeyAssetUUID:(id)arg0 tripName:(id)arg1 isLongTrip:(BOOL)arg2 localFactoryScore:(CGFloat)arg3 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif