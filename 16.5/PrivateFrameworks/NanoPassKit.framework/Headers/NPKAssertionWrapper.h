// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKASSERTIONWRAPPER_H
#define NPKASSERTIONWRAPPER_H

@class NSUUID;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface NPKAssertionWrapper : NSObject {
    id *_assertionInvalidator;
}


@property (readonly, nonatomic) NSObject<NSObject> *assertion; // ivar: _assertion
@property (readonly) NSUUID *wrapperUUID; // ivar: _wrapperUUID


-(BOOL)invalidateAssertionExpected:(BOOL)arg0 ;
-(id)description;
-(id)initWithAssertion:(id)arg0 invalidator:(id)arg1 ;
-(void)dealloc;


@end


#endif