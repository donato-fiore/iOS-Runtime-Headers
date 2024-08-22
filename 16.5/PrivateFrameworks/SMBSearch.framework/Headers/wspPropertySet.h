// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPPROPERTYSET_H
#define WSPPROPERTYSET_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface wspPropertySet : NSObject {
    network_uuid propSetGuid;
}


@property (retain) NSMutableArray *propArr; // ivar: _propArr
@property int propsetID; // ivar: _propsetID


-(NSUInteger)propertyCount;
-(id)initWithPropSetID:(int)arg0 ;
-(id)propertyForPropID:(unsigned int)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(void)addProperty:(id)arg0 ;


@end


#endif