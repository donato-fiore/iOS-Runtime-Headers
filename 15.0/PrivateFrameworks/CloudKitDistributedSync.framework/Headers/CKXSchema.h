// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXSCHEMA_H
#define CKXSCHEMA_H


#import <Foundation/Foundation.h>


@interface CKXSchema : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> structTokens;
    unordered_map<unsigned long, CKXStructProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXStructProperties>>> structTokenToStructProperties;
    unordered_map<unsigned long, std::vector<unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::vector<unsigned long>>>> structTokenToFieldTokens;
    unordered_map<unsigned long, CKXFieldProperties, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXFieldProperties>>> fieldTokenToFieldProperties;
}


@property (nonatomic) NSUInteger nextIdentifier; // ivar: _nextIdentifier


-(BOOL)fieldExists:(NSUInteger)arg0 ;
-(BOOL)structIsTopLevelContainer:(NSUInteger)arg0 ;
-(BOOL)valueFieldIsOptional:(NSUInteger)arg0 ;
-(NSInteger)fieldTypeForField:(NSUInteger)arg0 ;
-(NSInteger)listTypeForField:(NSUInteger)arg0 ;
-(NSInteger)newIdentifier;
-(NSInteger)valueTypeForField:(NSUInteger)arg0 ;
-(NSUInteger)defineFieldForStruct:(NSUInteger)arg0 withEncoding:(char *)arg1 optional:(BOOL)arg2 ;
-(NSUInteger)defineListReferenceOfType:(NSInteger)arg0 forStruct:(NSUInteger)arg1 ;
-(NSUInteger)defineListReferenceToStructType:(NSUInteger)arg0 forStruct:(NSUInteger)arg1 ;
-(NSUInteger)defineStruct;
-(NSUInteger)defineStructReferenceToType:(NSUInteger)arg0 forStruct:(NSUInteger)arg1 ;
-(NSUInteger)defineTopLevelContainerStruct;
-(NSUInteger)fieldTokenAtIndex:(NSUInteger)arg0 forStructToken:(NSUInteger)arg1 ;
-(NSUInteger)fieldTokenCountForStructToken:(NSUInteger)arg0 ;
-(NSUInteger)referencedStructAtIndex:(NSUInteger)arg0 forStructToken:(NSUInteger)arg1 ;
-(NSUInteger)referencedStructCountForStructToken:(NSUInteger)arg0 ;
-(NSUInteger)structContainingField:(NSUInteger)arg0 ;
-(NSUInteger)structForListReference:(NSUInteger)arg0 ;
-(NSUInteger)structForStructReference:(NSUInteger)arg0 ;
-(NSUInteger)valueSizeForField:(NSUInteger)arg0 ;
-(id)init;


@end


#endif