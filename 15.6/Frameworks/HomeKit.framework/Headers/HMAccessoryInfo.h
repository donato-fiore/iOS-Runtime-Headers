// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFO_H
#define HMACCESSORYINFO_H


#import <Foundation/Foundation.h>


@interface HMAccessoryInfo : NSObject

@property (readonly, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly


-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithReadOnly:(BOOL)arg0 ;
-(id)protoPayload;


@end


#endif