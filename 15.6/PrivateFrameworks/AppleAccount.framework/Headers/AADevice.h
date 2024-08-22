// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AADEVICE_H
#define AADEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AADevice : NSObject

@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (readonly, nonatomic) NSString *modelLargePhotoURL1x; // ivar: _modelLargePhotoURL1x
@property (readonly, nonatomic) NSString *modelLargePhotoURL2x; // ivar: _modelLargePhotoURL2x
@property (readonly, nonatomic) NSString *modelLargePhotoURL3x; // ivar: _modelLargePhotoURL3x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL1x; // ivar: _modelSmallPhotoURL1x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL2x; // ivar: _modelSmallPhotoURL2x
@property (readonly, nonatomic) NSString *modelSmallPhotoURL3x; // ivar: _modelSmallPhotoURL3x
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSString *swVersion; // ivar: _swVersion


-(id)initWithDictionary:(id)arg0 ;


@end


#endif