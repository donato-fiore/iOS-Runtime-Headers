// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKRIGHTPADDINGTABLEENTRY_H
#define CRKRIGHTPADDINGTABLEENTRY_H

@class NSString;
@protocol CRKTableEntry;

#import <Foundation/Foundation.h>


@interface CRKRightPaddingTableEntry : NSObject <CRKTableEntry>

 {
    id *mObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithObject:(id)arg0 ;
-(id)rawStringValue;
-(id)stringValueWithLength:(NSUInteger)arg0 ;


@end


#endif