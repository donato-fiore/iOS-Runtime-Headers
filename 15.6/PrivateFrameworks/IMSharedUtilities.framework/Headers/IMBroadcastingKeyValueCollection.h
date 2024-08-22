// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBROADCASTINGKEYVALUECOLLECTION_H
#define IMBROADCASTINGKEYVALUECOLLECTION_H



#import "IMKeyValueCollection.h"

@interface IMBroadcastingKeyValueCollection : IMKeyValueCollection



-(void)_notifyListeners;


@end


#endif