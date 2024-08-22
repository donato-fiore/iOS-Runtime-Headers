// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGINFO_H
#define MRUNOWPLAYINGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MRUNowPlayingInfo : NSObject

@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSString *attribution; // ivar: _attribution
@property (retain, nonatomic) NSString *composer; // ivar: _composer
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly, copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) NSString *radio; // ivar: _radio
@property (readonly, nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 artist:(id)arg2 album:(id)arg3 radio:(id)arg4 composer:(id)arg5 attribution:(id)arg6 placeholder:(id)arg7 showPlaceholder:(BOOL)arg8 isPlaying:(BOOL)arg9 ;
-(id)initWithMPCResponse:(id)arg0 placeholder:(id)arg1 ;
-(id)initWithMRResponse:(id)arg0 placeholder:(id)arg1 ;
-(id)stringForComponents:(NSUInteger)arg0 ;


@end


#endif