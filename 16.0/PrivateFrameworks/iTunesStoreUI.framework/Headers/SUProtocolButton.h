// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUPROTOCOLBUTTON_H
#define SUPROTOCOLBUTTON_H

@class NSURL, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUProtocolButton : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *buttonDictionary; // ivar: _buttonDictionary
@property (readonly, nonatomic) NSString *buttonLocation;
@property (readonly, nonatomic) NSString *buttonTarget;
@property (readonly, nonatomic) NSString *buttonTitle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithButtonDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif