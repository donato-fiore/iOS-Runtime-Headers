// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUIMESSAGECELLCONFIGURATION_H
#define CPUIMESSAGECELLCONFIGURATION_H

@class NSString, UIImage;
@protocol CPUIMessageCellConfigurationProtocol;

#import <Foundation/Foundation.h>


@interface CPUIMessageCellConfiguration : NSObject <CPUIMessageCellConfigurationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL showsMute; // ivar: _showsMute
@property (nonatomic) BOOL showsPin; // ivar: _showsPin
@property (nonatomic) BOOL showsStar; // ivar: _showsStar
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIImage *trailingImage; // ivar: _trailingImage
@property (copy, nonatomic) NSString *trailingText; // ivar: _trailingText
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 unread:(BOOL)arg3 showsPin:(BOOL)arg4 showsStar:(BOOL)arg5 showsMute:(BOOL)arg6 trailingText:(id)arg7 trailingImage:(id)arg8 ;
+(id)configurationWithText:(id)arg0 detailText:(id)arg1 image:(id)arg2 unread:(BOOL)arg3 showsPin:(BOOL)arg4 showsStar:(BOOL)arg5 showsMute:(BOOL)arg6 trailingText:(id)arg7 trailingImage:(id)arg8 enabled:(BOOL)arg9 ;


@end


#endif