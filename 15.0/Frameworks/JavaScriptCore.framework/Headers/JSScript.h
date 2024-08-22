// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JSSCRIPT_H
#define JSSCRIPT_H


#import <Foundation/Foundation.h>


@interface JSScript : NSObject {
    WeakObjCPtr<JSVirtualMachine> m_virtualMachine;
    NSInteger m_type;
    MappedFileData m_mappedSource;
    String m_source;
    RetainPtr<NSURL> m_sourceURL;
    RetainPtr<NSURL> m_cachePath;
    RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> m_cachedBytecode;
}




+(id)scriptOfType:(NSInteger)arg0 memoryMappedFromASCIIFile:(id)arg1 withSourceURL:(id)arg2 andBytecodeCache:(id)arg3 inVirtualMachine:(id)arg4 error:(*id)arg5 ;
+(id)scriptOfType:(NSInteger)arg0 withSource:(id)arg1 andSourceURL:(id)arg2 andBytecodeCache:(id)arg3 inVirtualMachine:(id)arg4 error:(*id)arg5 ;
-(*void)jsSourceCode;
-(*void)source;
-(BOOL)cacheBytecodeWithError:(*id)arg0 ;
-(BOOL)isUsingBytecodeCache;
-(BOOL)writeCache:(*void)arg0 ;
-(NSInteger)type;
-(id)init;
-(id)sourceURL;
-(struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> )cachedBytecode;
-(struct SourceCode )sourceCode;
-(unsigned int)hash;
-(void)readCache;


@end


#endif