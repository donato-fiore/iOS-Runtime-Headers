// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRCOMMANDINFOWRAPPER_H
#define _TVRCMRCOMMANDINFOWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TVRCMRCommandInfoWrapper : NSObject {
    *void _info;
}


@property (readonly, nonatomic) unsigned int command;
@property (readonly, copy, nonatomic) NSString *commandDescription;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;


-(id)description;
-(id)initWithCommandInfo:(*void)arg0 ;
-(void)dealloc;


@end


#endif