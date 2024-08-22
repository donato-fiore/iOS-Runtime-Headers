// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYNETWORKSIGNAL_H
#define PTCINEMATOGRAPHYNETWORKSIGNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PTCinematographyNetworkSignal : NSObject

@property (readonly) NSUInteger count; // ivar: _count
@property (readonly) NSString *name; // ivar: _name


+(Class)subclassForName:(id)arg0 ;
+(id)networkSignalWithModelDictionary:(id)arg0 ;
-(BOOL)checkSignalForStream:(id)arg0 ;
-(id)initWithModelDictionary:(id)arg0 ;
-(void)writePayload:(id)arg0 toStream:(id)arg1 ;


@end


#endif