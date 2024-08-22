// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSFBMSTRINGDATA_H
#define FSFBMSTRINGDATA_H

@class NSString;
@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface FSFBMStringData : NSObject <BMStoreData>

 {
    unsigned int _dataVersion;
    NSString *_content;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)content;
-(id)initWithContent:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)serialize;


@end


#endif