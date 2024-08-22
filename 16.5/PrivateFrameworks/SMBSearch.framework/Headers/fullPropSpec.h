// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FULLPROPSPEC_H
#define FULLPROPSPEC_H


#import <Foundation/Foundation.h>


@interface fullPropSpec : NSObject {
    network_uuid propGuid;
}


@property unsigned int propID; // ivar: _propID
@property int propNumber; // ivar: _propNumber
@property unsigned int ulKind; // ivar: _ulKind


-(id)initWithPropertyNumber:(int)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif