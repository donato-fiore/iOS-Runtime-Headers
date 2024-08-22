// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOGRAPH_H
#define USOGRAPH_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOGraph : NSObject <NSSecureCoding>

 {
    unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> _usoGraph;
}




+(BOOL)supportsSecureCoding;
-(*void)getCppGraph;
-(*void)getCppRootNode;
-(id)createEntityNode:(*void)arg0 ;
-(id)createIntNode:(id)arg0 ;
-(id)createOperatorNode:(*void)arg0 ;
-(id)createStringNode:(id)arg0 ;
-(id)createTaskNode:(*void)arg0 verb:(*void)arg1 ;
-(id)getRoot;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCppUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif