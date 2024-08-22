// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIIOMEDIA_H
#define DIIOMEDIA_H

@class NSString;


#import "DIIOObject.h"

@interface DIIOMedia : DIIOObject

@property (readonly, copy) NSString *BSDName;


-(id)copyBlockDeviceWithError:(*id)arg0 ;
-(id)initWithDevName:(id)arg0 error:(*id)arg1 ;


@end


#endif