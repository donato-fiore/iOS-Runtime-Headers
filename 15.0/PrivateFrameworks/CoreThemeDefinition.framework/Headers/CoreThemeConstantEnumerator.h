// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORETHEMECONSTANTENUMERATOR_H
#define CORETHEMECONSTANTENUMERATOR_H


#import <Foundation/Foundation.h>


@interface CoreThemeConstantEnumerator : NSObject {
    *void _globalListPointer;
    NSInteger _listIndex;
    NSInteger _indexOfLastEntry;
    BOOL _isPastLastEntry;
}




+(id)enumeratorForGlobalListAtAddress:(*void)arg0 ;
-(NSInteger)constantCount;
-(id)currentConstantHelper;
-(id)firstConstantHelper;
-(id)initWithGlobalListAtAddress:(*void)arg0 ;
-(id)lastConstantHelper;
-(id)nextConstantHelper;
-(id)previousConstantHelper;
-(void)_moveToIndexOfLastEntry;


@end


#endif