// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKGAMESHARINGINFO_H
#define GKGAMESHARINGINFO_H

@class NSString, UIImage, NSURL;

#import <Foundation/Foundation.h>


@interface GKGameSharingInfo : NSObject

@property (nonatomic) BOOL complete; // ivar: _complete
@property (retain, nonatomic) NSString *developerName; // ivar: _developerName
@property (retain, nonatomic) NSString *emailBody; // ivar: _emailBody
@property (retain, nonatomic) NSString *emailSubject; // ivar: _emailSubject
@property (retain, nonatomic) NSString *gameName; // ivar: _gameName
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) NSURL *shortViewItemURL; // ivar: _shortViewItemURL
@property (retain, nonatomic) NSURL *viewItemURL; // ivar: _viewItemURL


-(id)initWithGame:(id)arg0 ;
-(id)itemsForActivityType:(id)arg0 ;
-(id)operationThatBlocksUntilLoaded;
-(id)subjectForEmailActivity;
-(id)thumbnailForActivityType:(id)arg0 ;


@end


#endif