// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPAGESECTION_H
#define SUPAGESECTION_H

@class SSURLRequestProperties, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface SUPageSection : NSObject

@property (copy, nonatomic) SSURLRequestProperties *URLRequestProperties; // ivar: _urlRequestProperties
@property (nonatomic) CGFloat expirationTime; // ivar: _expirationTime
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) id *segmentedControlItem;
@property (nonatomic) NSInteger structuredPageType; // ivar: _structuredPageType
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 ;
-(id)init;
-(void)_setURL:(id)arg0 ;
-(void)_setURLBagKey:(id)arg0 ;
-(void)dealloc;


@end


#endif