// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONTACTNAMERECORDCHANGEHISTORYACCUMULATOR_H
#define PPCONTACTNAMERECORDCHANGEHISTORYACCUMULATOR_H

@class CNContactStore, NSArray, NSMutableArray, NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface PPContactNameRecordChangeHistoryAccumulator : NSObject <CNChangeHistoryEventVisitor>

 {
    CNContactStore *_store;
    NSArray *_keysToFetch;
    NSMutableArray *_records;
    BOOL _truncated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif