// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANPLAYBACKCOMMAND_H
#define ANPLAYBACKCOMMAND_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANPlaybackCommand : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *announcementIdentifiers; // ivar: _announcementIdentifiers
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
+(id)nextCommand;
+(id)playCommandWithOptions:(NSUInteger)arg0 announcementIdentifiers:(id)arg1 ;
+(id)previousCommand;
+(id)stopCommand;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackOperation:(NSUInteger)arg0 options:(NSUInteger)arg1 announcementIdentifiers:(id)arg2 ;
-(id)initWithPlaybackOperation:(NSUInteger)arg0 options:(NSUInteger)arg1 forRecipient:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif