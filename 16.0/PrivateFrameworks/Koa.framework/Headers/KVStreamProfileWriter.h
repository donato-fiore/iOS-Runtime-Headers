// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVSTREAMPROFILEWRITER_H
#define KVSTREAMPROFILEWRITER_H

@class NSOutputStream, NSString;
@protocol KVProfileWriter;

#import <Foundation/Foundation.h>


@interface KVStreamProfileWriter : NSObject <KVProfileWriter>

 {
    NSOutputStream *_stream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)finishDataset:(*id)arg0 ;
-(BOOL)finishProfile:(*id)arg0 ;
-(BOOL)startDataset:(id)arg0 error:(*id)arg1 ;
-(BOOL)startProfile:(id)arg0 error:(*id)arg1 ;
-(id)initWithOutputStream:(id)arg0 ;


@end


#endif