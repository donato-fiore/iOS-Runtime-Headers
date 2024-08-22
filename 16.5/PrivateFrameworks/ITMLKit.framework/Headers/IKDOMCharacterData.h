// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMCHARACTERDATA_H
#define IKDOMCHARACTERDATA_H

@class NSString;
@protocol IKJSDOMCharacterData;


#import "IKDOMNode.h"

@interface IKDOMCharacterData : IKDOMNode <IKJSDOMCharacterData>



@property (retain, nonatomic) NSString *data;
@property (readonly, nonatomic) NSUInteger length;




@end


#endif