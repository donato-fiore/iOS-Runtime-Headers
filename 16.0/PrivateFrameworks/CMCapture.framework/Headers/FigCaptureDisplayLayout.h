// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREDISPLAYLAYOUT_H
#define FIGCAPTUREDISPLAYLAYOUT_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface FigCaptureDisplayLayout : NSObject

@property (nonatomic, getter=isContactlessUIServiceVisible) BOOL contactlessUIServiceVisible; // ivar: _contactlessUIServiceVisible
@property (nonatomic) NSInteger displayType; // ivar: _displayType
@property (retain, nonatomic) NSArray *foregroundApps; // ivar: _foregroundApps
@property (retain, nonatomic) NSArray *obscuredApps; // ivar: _obscuredApps
@property (retain, nonatomic) NSArray *pipApps; // ivar: _pipApps
@property (nonatomic, getter=isSiriVisible) BOOL siriVisible; // ivar: _siriVisible
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSArray *transitioningApps; // ivar: _transitioningApps


+(void)initialize;
-(id)_init;
-(id)debugDescription;
-(id)description;
-(void)dealloc;


@end


#endif