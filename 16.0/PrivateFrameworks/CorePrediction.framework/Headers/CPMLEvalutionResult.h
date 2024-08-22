// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPMLEVALUTIONRESULT_H
#define CPMLEVALUTIONRESULT_H


#import <Foundation/Foundation.h>


@interface CPMLEvalutionResult : NSObject {
    NSObject *object;
    NSUInteger count;
}




-(CGFloat)getDouble;
-(id)getList;
-(id)getListDict;
-(id)getString;
-(id)getStringList;
-(id)init:(id)arg0 withConfigurationList:(id)arg1 ;
-(int)getInt;


@end


#endif