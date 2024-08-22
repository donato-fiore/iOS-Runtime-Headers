// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREMACHPORTSENDRIGHT_H
#define FIGCAPTUREMACHPORTSENDRIGHT_H


#import <Foundation/Foundation.h>


@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}


@property (readonly, nonatomic) unsigned int port; // ivar: _port


-(id)description;
-(id)initWithPort:(unsigned int)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif