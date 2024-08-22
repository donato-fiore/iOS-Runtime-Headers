// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCESAGESIZEDLIST_H
#define TSCESAGESIZEDLIST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCESageSizedList : NSObject {
    vector<TSCEASTNodeArray *, std::allocator<TSCEASTNodeArray *>> _nodeArrays;
}


@property (readonly, nonatomic) BOOL isArray; // ivar: _isArray
@property (readonly, nonatomic) unsigned int numberOfItems;
@property (retain, nonatomic) NSString *trailingWhitespace; // ivar: _trailingWhitespace


-(?)functionNode:(?)arg0 functionNamewhitespaceAfterLabel;
-(id)init;
-(id)makeListWithFirstElem:(struct TSCEASTNodeArray *)arg0 trailingWhitespace:(id)arg1 isArray:(BOOL)arg2 ;
-(struct TSCEASTNodeArray *)arrayOrListNode:(struct TSCEParser *)arg0 ;
-(void)appendNodeArray:(struct TSCEASTNodeArray *)arg0 ;


@end


#endif