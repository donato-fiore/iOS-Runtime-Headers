// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCDUMPBINARYTOXMLSTATE_H
#define TCDUMPBINARYTOXMLSTATE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TCDumpBinaryToXmlState : NSObject {
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}




-(id)init;
-(id)valueForCurrentField;
-(id)valueForField:(id)arg0 ;
-(void)cacheValueforCurrentField:(id)arg0 ;
-(void)setCurrentField:(id)arg0 ;


@end


#endif