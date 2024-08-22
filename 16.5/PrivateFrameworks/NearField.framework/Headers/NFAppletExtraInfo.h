// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFAPPLETEXTRAINFO_H
#define NFAPPLETEXTRAINFO_H

@class NSData;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFAppletExtraInfo : NSObject

@property (readonly, weak, nonatomic) NFApplet *applet; // ivar: _applet
@property (readonly, nonatomic) NSData *obgk; // ivar: _obgk
@property (readonly, nonatomic) NSData *ssdAID; // ivar: _ssdAID


+(id)infoWithDictionary:(id)arg0 applet:(id)arg1 ;
-(id)debugDescription;


@end


#endif