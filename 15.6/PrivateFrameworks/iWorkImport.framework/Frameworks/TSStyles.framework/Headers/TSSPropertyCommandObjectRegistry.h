// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSPROPERTYCOMMANDOBJECTREGISTRY_H
#define TSSPROPERTYCOMMANDOBJECTREGISTRY_H


#import <Foundation/Foundation.h>


@interface TSSPropertyCommandObjectRegistry : NSObject {
    map<int, std::pair<Class, std::string>, std::less<int>, std::allocator<std::pair<const int, std::pair<Class, std::string>>>> _indexToClass;
    map<Class, int, std::less<Class>, std::allocator<std::pair<const Class, int>>> _classToIndex;
}




+(id)sharedRegistry;
+(void)setIntializationHandler:(id)arg0 ;
-(*void)nameForIndex:(int)arg0 ;
-(Class)classForIndex:(int)arg0 ;
-(id)init;
-(int)indexForClass:(Class)arg0 ;
-(void)registerClass:(Class)arg0 withField:(id)arg1 ;


@end


#endif