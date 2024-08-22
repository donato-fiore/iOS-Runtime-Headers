// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSAVEDGAME_H
#define GKSAVEDGAME_H

@class NSString, NSURL, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKSavedGame : NSObject <NSCopying>



@property (retain) NSString *deviceName; // ivar: _deviceName
@property (retain) NSURL *fileURL; // ivar: _fileURL
@property (retain) NSDate *modificationDate; // ivar: _modificationDate
@property (retain) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)loadDataWithCompletionHandler:(id)arg0 ;


@end


#endif