// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NENEXUSBROWSE_H
#define NENEXUSBROWSE_H

@class NSUUID, NWBrowseDescriptor, NWParameters;

#import <Foundation/Foundation.h>


@interface NENexusBrowse : NSObject

@property (retain, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NWBrowseDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NWParameters *parameters; // ivar: _parameters




@end


#endif