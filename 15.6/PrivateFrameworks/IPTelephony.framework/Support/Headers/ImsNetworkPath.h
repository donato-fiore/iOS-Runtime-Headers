// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSNETWORKPATH_H
#define IMSNETWORKPATH_H

@class NWPathEvaluator;

#import <Foundation/Foundation.h>


@interface ImsNetworkPath : NSObject {
    NWPathEvaluator *_pathEvaluator;
    *ImsNetworkPathDelegate _delegate;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _ifaceName;
    BOOL _observingPath;
}




-(id)initWithInterface:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 delegate:(struct ImsNetworkPathDelegate *)arg1 ;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )ifaceName;
-(void)dealloc;
-(void)evaluateInterface;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif