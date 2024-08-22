// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGEDATACONTAINER_H
#define MFMESSAGEDATACONTAINER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MFMessageDataContainer : NSObject {
    NSData *_data;
    BOOL _partial;
    BOOL _incomplete;
}




-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 partial:(BOOL)arg1 incomplete:(BOOL)arg2 ;


@end


#endif