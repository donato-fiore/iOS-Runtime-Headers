// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRAY_H
#define PKTRAY_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKTray : NSObject

@property (readonly) BOOL isEmpty;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (retain) NSDictionary *trayDict; // ivar: _trayDict


+(id)filter:(id)arg0 withBlock:(id)arg1 ;
+(id)trayWithString:(id)arg0 andMediaSource:(id)arg1 ;
+(id)traysWithAttrs:(struct _ipp_s *)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 andMediaSource:(id)arg1 ;
-(id)mediaName;
-(void)dealloc;


@end


#endif